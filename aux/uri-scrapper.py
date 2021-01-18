import requests
from bs4 import BeautifulSoup


headers = {
        "authority": "www.urionlinejudge.com.br",
        "cache-control": "max-age=0",
        "upgrade-insecure-requests": "1",
        "user-agent": "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.183 Safari/537.36",
        "accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
        "sec-fetch-site": "same-origin",
        "sec-fetch-mode": "navigate",
        "sec-fetch-user": "1",
        "sec-fetch-dest": "document",
        "referer": "https://www.urionlinejudge.com.br/judge/pt/problems/index/1",
        "accept-language": "pt-BR,pt;q=0.9,en-US;q=0.8,en;q=0.7",
        "cookie": "cookie: csrfToken=<XYZ> judge=<XYZ> __cfduid=<XYZ>"
}

resource="https://www.urionlinejudge.com.br/judge/pt/problems/index/1"

outputBuffer = []

for page in range(1,12):
    response = requests.get(resource, headers=headers, params={'page':page})
    soup = BeautifulSoup(response.text, "lxml")
    lines = soup.find_all('tr',{"class":["impar","par"]})
    for line in lines:
        cols = line.find_all("td",{"class":["id","tiny"]})
        if cols:
            outputBuffer.append({"id": cols[0].a.string, "status": "solved" if cols[1].img else "nop"})


for data in outputBuffer:
    print(data)
