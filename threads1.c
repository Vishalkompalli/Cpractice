#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Function that will be run by the new thread
void* print_message(void* arg) 
{
    char* message = (char*) arg;
    for (int i = 0; i < 5; i++) 
    {
        printf("%s\n", message);
        sleep(1); // Sleep for 1 second
    }
    return NULL;
}

int main() {
    pthread_t thread_id;
    char* msg = "Hello from the new thread!";

    // Create a new thread that will execute the 'print_message' function
    if (pthread_create(&thread_id, NULL, print_message, (void*)msg) != 0) 
    {
        printf("Error creating thread.\n");
        return 1;
    }

    // Wait for the new thread to finish
    pthread_join(thread_id, NULL);

    printf("Thread has finished executing.\n");
    return 0;
}
