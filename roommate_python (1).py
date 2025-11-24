class Roommate:
    def __init__(self, name, age, height, nationality, skin_colour, personality, hobby, education_level):
        self.name = name
        self.age = age
        self.height = height
        self.nationality = nationality
        self.skin_colour = skin_colour
        self.personality = personality
        self.hobby = hobby
        self.education_level = education_level

# Create an object (instance) of the Roommate class
my_roommate = Roommate(
    name="John Smith",
    age=25,
    height=5.9,  # in feet
    nationality="American",
    skin_colour="Light Brown",
    personality="Friendly and outgoing",
    hobby="Gardening",
    education_level="Master's Degree"
)

# Display the details
print("Roommate's Details:")
print("-------------------")
print("Name:", my_roommate.name)
print("Age:", my_roommate.age, "years old")
print("Height:", my_roommate.height, "feet")
print("Nationality:", my_roommate.nationality)
print("Skin Colour:", my_roommate.skin_colour)
print("Personality:", my_roommate.personality)
print("Hobby:", my_roommate.hobby)
print("Education Level:", my_roommate.education_level)
