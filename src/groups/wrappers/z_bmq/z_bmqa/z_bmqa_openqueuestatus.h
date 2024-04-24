#ifndef INCLUDED_Z_BMQA_OPENQUEUESTATUS
#define INCLUDED_Z_BMQA_OPENQUEUESTATUS

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdbool.h>
#include <z_bmqa_queueid.h>

typedef struct z_bmqa_OpenQueueStatus z_bmqa_OpenQueueStatus;

/**
 * @brief Deletes an OpenQueueStatus object.
 *
 * This function deletes the OpenQueueStatus object pointed to by `status_obj` and sets the pointer to NULL.
 *
 * @param status_obj  A pointer to a pointer to a z_bmqa_OpenQueueStatus object that will be deleted.
 *
 * @return Returns 0 upon successful deletion.
 */
int z_bmqa_OpenQueueStatus__delete(z_bmqa_OpenQueueStatus** status_obj);

/**
 * @brief Creates a new OpenQueueStatus object.
 *
 * This function creates a new OpenQueueStatus object and assigns it to the pointer pointed to by `status_obj`.
 *
 * @param status_obj  A pointer to a pointer to a z_bmqa_OpenQueueStatus object that will be created.
 *
 * @return Returns 0 upon successful creation.
 */
int z_bmqa_OpenQueueStatus__create(z_bmqa_OpenQueueStatus** status_obj);

/**
 * @brief Creates a copy of an OpenQueueStatus object.
 *
 * This function creates a copy of the OpenQueueStatus object `other` and assigns it to `status_obj`.
 *
 * @param status_obj  A pointer to a pointer to a z_bmqa_OpenQueueStatus object where the copy will be stored.
 * @param other       A pointer to an existing z_bmqa_OpenQueueStatus object to be copied.
 *
 * @return Returns 0 upon successful copying.
 */
int z_bmqa_OpenQueueStatus__createCopy(z_bmqa_OpenQueueStatus** status_obj, const z_bmqa_OpenQueueStatus* other);

/**
 * @brief Creates a fully initialized OpenQueueStatus object.
 *
 * This function creates an OpenQueueStatus object with all fields initialized and assigns it to `status_obj`.
 *
 * @param status_obj        A pointer to a pointer to a z_bmqa_OpenQueueStatus object that will be fully initialized.
 * @param queueId           A pointer to a z_bmqa_QueueId object representing the queue ID.
 * @param result            An integer representing the operation result.
 * @param errorDescription  A pointer to a string describing any errors.
 *
 * @return Returns 0 upon successful initialization.
 */
int z_bmqa_OpenQueueStatus__createFull(z_bmqa_OpenQueueStatus** status_obj, const z_bmqa_QueueId* queueId, int result, const char* errorDescription);

/**
 * @brief Converts an OpenQueueStatus object to a boolean value.
 *
 * This function checks the result status of the OpenQueueStatus object `status_obj` and returns true if the operation was successful.
 *
 * @param status_obj  A pointer to a z_bmqa_OpenQueueStatus object to be checked.
 *
 * @return Returns true if the operation was successful, otherwise false.
 */
bool z_bmqa_OpenQueueStatus__toBool(const z_bmqa_OpenQueueStatus* status_obj);

/**
 * @brief Retrieves the queue ID from an OpenQueueStatus object.
 *
 * This function retrieves the queue ID from the OpenQueueStatus object `status_obj` and stores it in `queueId_obj`.
 *
 * @param status_obj  A pointer to a z_bmqa_OpenQueueStatus object from which the queue ID will be retrieved.
 * @param queueId_obj A pointer to a pointer to a z_bmqa_QueueId object where the queue ID will be stored.
 *
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_OpenQueueStatus__queueId(const z_bmqa_OpenQueueStatus* status_obj, const z_bmqa_QueueId** queueId_obj);

/**
 * @brief Retrieves the result code from an OpenQueueStatus object.
 *
 * This function retrieves the result code from the OpenQueueStatus object `status_obj`.
 *
 * @param status_obj  A pointer to a z_bmqa_OpenQueueStatus object from which the result code will be retrieved.
 *
 * @return Returns the result code as an integer.
 */
int z_bmqa_OpenQueueStatus__result(const z_bmqa_OpenQueueStatus* status_obj);

/**
 * @brief Retrieves the error description from an OpenQueueStatus object.
 *
 * This function retrieves the error description from the OpenQueueStatus object `status_obj`.
 *
 * @param status_obj  A pointer to a z_bmqa_OpenQueueStatus object from which the error description will be retrieved.
 *
 * @return Returns a pointer to a string containing the error description.
 */
const char* z_bmqa_OpenQueueStatus__errorDescription(const z_bmqa_OpenQueueStatus* status_obj);

#if defined(__cplusplus)
}
#endif

#endif
