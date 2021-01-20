import requests
import json
from bs4 import BeautifulSoup

with open('header.json', 'r') as headerFile:
    content=headerFile.read()

with open ('cookies.local', 'r') as cookiesFile:
    cookie=cookiesFile.read()

headers=json.loads(content)
headers["cookie"]=cookie.strip()

resource="https://www.urionlinejudge.com.br/judge/pt/problems/index/1"

outputBuffer = []

for page in range(1,13):
    print("Scrapping ",str(page)+"/12")
    response = requests.get(resource, headers=headers, params={'page':page})
    soup = BeautifulSoup(response.text, "lxml")
    lines = soup.find_all('tr',{"class":["impar","par"]})
    for line in lines:
        cols = line.find_all("td",{"class":["id","tiny"]})
        if cols:
            outputBuffer.append({"id": cols[0].a.string, "status": "solved" if cols[1].img else "nop"})

for data in outputBuffer:
    print(data)
