def get_database():
    from pymongo import MongoClient
    import pymongo

    # Provide the mongodb atlas url to connect python to mongodb using pymongo
    CONNECTION_STRING = "mongodb+srv://Guilherme:Klax1903@cluster0.zwba4.mongodb.net/"

    # Create a connection using MongoClient. You can import MongoClient or use pymongo.MongoClient
    from pymongo import MongoClient
    import certifi
    client = MongoClient(CONNECTION_STRING, tlsCAFile=certifi.where())

    # Create the database for our example (we will use the same database throughout the tutorial
    return client['Teste']


# This is added so that many files can reuse the function get_database()
if __name__ == "__main__":

    # Get the database
    dbname = get_database()

    Person = dbname['Person']

    itens = Person.find()

    for item in itens:
        # This does not give a very readable output
        print(item)

    from pandas import DataFrame
    # convert the dictionary objects to dataframe
    items_df = DataFrame(itens)

    # see the magic
    print(items_df)
