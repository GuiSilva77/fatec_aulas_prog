from pprint import pprint
from pymongo import MongoClient

# Provide the mongodb atlas url to connect python to mongodb using pymongo
CONNECTION_STRING = "mongodb+srv://Guilherme:Klax1903@cluster0.zwba4.mongodb.net/Teste?retryWrites=true&w=majority"

# Create a connection using MongoClient. You can import MongoClient or use pymongo.MongoClient
client = MongoClient(CONNECTION_STRING)


db = client.teste

serverStatusResult = db.command("serverStatus")
pprint(serverStatusResult)
