/**
 * print_dog - a function of struct
 * @d: struct d
 */
void print_dog(struct dog *d)
{
	if (!(d.name))
		printf("Name: (nil)");
	else
		printf("Name: %s", d.name);

	printf("Age: %d ", d.age);

	if (!(d.owner))
		printf("owner: (nil)");
	else
		printf("owner: %s", d.owner);
