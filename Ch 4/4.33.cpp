// Using Table 4.12 (p. 166) explain what the following expression does:

bool someValue = true;
int x, y;

someValue ? ++x, ++y : --x, --y
// same as (someValue ? (++x, ++y) : --x), --y