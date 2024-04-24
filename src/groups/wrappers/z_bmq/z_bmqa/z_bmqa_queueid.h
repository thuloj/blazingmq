#ifndef INCLUDED_Z_BMQA_QUEUEID
#define INCLUDED_Z_BMQA_QUEUEID

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdint.h>
#include <z_bmqt_correlationid.h>
#include <z_bmqt_queueoptions.h>
#include <z_bmqt_uri.h>

typedef struct z_bmqa_QueueId z_bmqa_QueueId;

/**
 * @brief Deletes a queue ID object.
 *
 * This function deletes the queue ID object pointed to by `queueId_obj`.
 *
 * @param queueId_obj A pointer to a pointer to the queue ID object to be deleted.
 * @return Returns 0 upon successful deletion.
 */
int z_bmqa_QueueId__delete(z_bmqa_QueueId** queueId_obj);

/**
 * @brief Creates a new queue ID object.
 *
 * This function allocates and initializes a new queue ID object, setting `queueId_obj` to point to it.
 *
 * @param queueId_obj A pointer to a pointer where the newly created queue ID object will be stored.
 * @return Returns 0 upon successful creation.
 */
int z_bmqa_QueueId__create(z_bmqa_QueueId** queueId_obj);

/**
 * @brief Creates a copy of an existing queue ID object.
 *
 * This function copies an existing queue ID object into a new queue ID object.
 *
 * @param queueId_obj A pointer to a pointer where the copied queue ID object will be stored.
 * @param other       A pointer to the existing queue ID object to be copied.
 * @return Returns 0 upon successful copy.
 */
int z_bmqa_QueueId__createCopy(z_bmqa_QueueId** queueId_obj, const z_bmqa_QueueId* other);

/**
 * @brief Creates a queue ID object from a correlation ID.
 *
 * This function creates a queue ID object based on a given correlation ID.
 *
 * @param queueId_obj   A pointer to a pointer where the newly created queue ID object will be stored.
 * @param correlationId A pointer to the correlation ID used to create the queue ID object.
 * @return Returns 0 upon successful creation.
 */
int z_bmqa_QueueId__createFromCorrelationId(z_bmqa_QueueId** queueId_obj, const z_bmqt_CorrelationId* correlationId);

/**
 * @brief Creates a queue ID object from a numeric value.
 *
 * This function creates a queue ID object based on a numeric value.
 *
 * @param queueId_obj A pointer to a pointer where the newly created queue ID object will be stored.
 * @param numeric     The numeric value used to create the queue ID object.
 * @return Returns 0 upon successful creation.
 */
int z_bmqa_QueueId__createFromNumeric(z_bmqa_QueueId** queueId_obj, int64_t numeric);

/**
 * @brief Creates a queue ID object from a pointer.
 *
 * This function creates a queue ID object based on a pointer value.
 *
 * @param queueId_obj A pointer to a pointer where the newly created queue ID object will be stored.
 * @param pointer     The pointer used to create the queue ID object.
 * @return Returns 0 upon successful creation.
 */
int z_bmqa_QueueId__createFromPointer(z_bmqa_QueueId** queueId_obj, void* pointer);

/**
 * @brief Retrieves the correlation ID associated with a queue ID object.
 *
 * This function returns the correlation ID associated with the specified queue ID object.
 *
 * @param queueId_obj A pointer to the queue ID object.
 * @return A pointer to the correlation ID if present, otherwise NULL.
 */
const z_bmqt_CorrelationId* z_bmqa_QueueId__correlationId(const z_bmqa_QueueId* queueId_obj);

/**
 * @brief Retrieves the flags associated with a queue ID object.
 *
 * This function returns the flags associated with the specified queue ID object.
 *
 * @param queueId_obj A pointer to the queue ID object.
 * @return The flags as a uint64_t value.
 */
uint64_t z_bmqa_QueueId__flags(const z_bmqa_QueueId* queueId_obj);

/**
 * @brief Retrieves the URI associated with a queue ID object.
 *
 * This function returns the URI associated with the specified queue ID object.
 *
 * @param queueId_obj A pointer to the queue ID object.
 * @return A pointer to the URI if present, otherwise NULL.
 */
const z_bmqt_Uri* z_bmqa_QueueId__uri(const z_bmqa_QueueId* queueId_obj);

/**
 * @brief Retrieves the options associated with a queue ID object.
 *
 * This function returns the options associated with the specified queue ID object.
 *
 * @param queueId_obj A pointer to the queue ID object.
 * @return A pointer to the queue options if present, otherwise NULL.
 */
const z_bmqt_QueueOptions* options(const z_bmqa_QueueId* queueId_obj);

/**
 * @brief Checks if a queue ID object is valid.
 *
 * This function checks if the specified queue ID object is valid.
 *
 * @param queueId_obj A pointer to the queue ID object.
 * @return Returns 1 if the queue ID is valid, 0 otherwise.
 */
int z_bmqa_QueueId__isValid(const z_bmqa_QueueId* queueId_obj);

#if defined(__cplusplus)
}
#endif

#endif
