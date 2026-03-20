// #include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Name, age, phone number, location
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    int phone = get_string("Phone number: ");
    string location = get_string("Location: ");

    printf("New Contact: %s, %i, lives in %s, and can be reached at %s", name, age, location, phone);


}