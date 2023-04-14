int sem_init(sem_t* sem, int pshared, unsigned int value) {
	*sem = value;
	// TODO: shared?
}

int sem_destroy(sem_t* sem) {

}

int sem_wait(sem_t* sem) {
	*sem--;
	if (sem < 0) {
		// TODO: block
	}
}

int sem_trywait(sem_t* sem) {
	*sem--;
}

int sem_post(sem_t* sem) {
	*sem++;
}

int sem_getvalue(sem_t* sem, int* valp) {
	*valp = *sem;
}