/* Provide a random millisecond-level delay */

/* Setting parameters */

/* Set maximum timer delay.  Default = 100 ms */
void set_max_milliseconds(int ms);

/* Choose a random value between 0 and max milliseconds */
int choose_delay();

/* Sleep (or spin) for specified number of milliseconds */
void ms_sleep(int ms, bool spin);

/* Determine if environment value set */
bool env_flag(char *name);

