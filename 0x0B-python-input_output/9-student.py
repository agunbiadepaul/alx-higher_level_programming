class Student:
    def __init__(self, first_name, last_name, age):
        # Initialize public instance attributes
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        # Return a dictionary representation of the Student instance
        return {
                'first_name': self.first_name,
                'last_name': self.last_name,
                'age': self.age
                }
