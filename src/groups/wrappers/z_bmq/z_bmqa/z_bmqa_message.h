#ifndef INCLUDED_Z_BMQA_MESSAGE
#define INCLUDED_Z_BMQA_MESSAGE

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdbool.h>
#include <z_bmqa_messageproperties.h>
#include <z_bmqa_queueid.h>
#include <z_bmqt_compressionalgorithmtype.h>
#include <z_bmqt_correlationid.h>
#include <z_bmqt_messageguid.h>
#include <z_bmqt_subscription.h>

typedef struct z_bmqa_Message z_bmqa_Message;

typedef struct z_bmqa_MessageConfirmationCookie z_bmqa_MessageConfirmationCookie;

/**
 * @brief Deletes a message object.
 * 
 * This function deletes the message object pointed to by `message_obj`.
 * 
 * @param message_obj A pointer to a pointer to the message object to be deleted.
 * 
 * @return Returns 0 upon successful deletion.
 */
int z_bmqa_Message__delete(z_bmqa_Message** message_obj);

/**
 * @brief Creates a new message object.
 * 
 * This function allocates and initializes a new message object, setting `message_obj` to point to it.
 * 
 * @param message_obj A pointer to a pointer where the newly created message object will be stored.
 * 
 * @return Returns 0 upon successful creation.
 */
int z_bmqa_Message__create(z_bmqa_Message** message_obj);

/**
 * @brief Sets the data reference for a message object.
 * 
 * This function sets the data of the message object to the data pointed to by `data`.
 * 
 * @param message_obj A pointer to the message object.
 * @param data        A pointer to the data to be set.
 * @param length      The length of the data.
 * 
 * @return Returns 0 upon successfully setting the data reference.
 */
int z_bmqa_Message__setDataRef(z_bmqa_Message* message_obj, const char* data, int length);

/**
 * @brief Sets the properties reference for a message object.
 * 
 * This function associates a set of properties with a message object.
 * 
 * @param message_obj   A pointer to the message object.
 * @param properties_obj A pointer to the properties to be set.
 * 
 * @return Returns 0 upon successfully setting the properties.
 */
int z_bmqa_Message__setPropertiesRef(z_bmqa_Message* message_obj, const z_bmqa_MessageProperties* properties_obj);

/**
 * @brief Clears the properties reference of a message object.
 * 
 * This function removes any properties associated with the message object.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return Returns 0 upon successfully clearing the properties.
 */
int z_bmqa_Message__clearPropertiesRef(z_bmqa_Message* message_obj);

/**
 * @brief Sets the correlation ID for a message object.
 * 
 * This function sets the correlation ID for the message object.
 * 
 * @param message_obj A pointer to the message object.
 * @param correlationId A pointer to the correlation ID to be set.
 * 
 * @return Returns 0 upon successfully setting the correlation ID.
 */
int z_bmqa_Message__setCorrelationId(z_bmqa_Message* message_obj, const z_bmqt_CorrelationId* correlationId);

/**
 * @brief Sets the compression algorithm type for a message object.
 * 
 * This function specifies the compression algorithm to be used for the message.
 * 
 * @param message_obj A pointer to the message object.
 * @param value The compression algorithm type enum to be set.
 * 
 * @return Returns 0 upon successfully setting the compression algorithm type.
 */
int z_bmqa_Message__setCompressionAlgorithmType(z_bmqa_Message* message_obj, z_bmqt_CompressionAlgorithmType::Enum value);

#ifdef BMQ_ENABLE_MSG_GROUPID

/**
 * @brief Sets the group ID for a message object.
 * 
 * This function sets the group ID for the message object, used for grouping messages.
 * 
 * @param message_obj A pointer to the message object.
 * @param groupId     A pointer to the group ID to be set.
 * 
 * @return Returns 0 upon successfully setting the group ID.
 */
int z_bmqa_Message__setGroupId(z_bmqa_Message* message_obj, const char* groupId);

/**
 * @brief Clears the group ID of a message object.
 * 
 * This function removes the group ID associated with the message object.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return Returns 0 upon successfully clearing the group ID.
 */
int z_bmqa_Message__clearGroupId(z_bmqa_Message* message_obj);

#endif

/**
 * @brief Clones a message object.
 * 
 * This function creates a new copy of a message object.
 * 
 * @param message_obj A pointer to the message object to be cloned.
 * @param other_obj   A pointer to a pointer where the cloned object will be stored.
 * 
 * @return Returns 0 upon successfully cloning the message.
 */
int z_bmqa_Message__clone(const z_bmqa_Message* message_obj, z_bmqa_Message** other_obj);

/**
 * @brief Retrieves the queue ID associated with a message object.
 * 
 * This function gets the queue ID from the message object.
 * 
 * @param message_obj A pointer to the message object.
 * @param queueId_obj A pointer to a pointer where the queue ID will be stored.
 * 
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_Message__queueId(const z_bmqa_Message* message_obj, const z_bmqa_QueueId** queueId_obj);

/**
 * @brief Retrieves the correlation ID associated with a message object.
 * 
 * This function gets the correlation ID from the message object.
 * 
 * @param message_obj A pointer to the message object.
 * @param correlationId_obj A pointer to a pointer where the correlation ID will be stored.
 * 
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_Message__correlationId(const z_bmqa_Message* message_obj, const z_bmqt_CorrelationId** correlationId_obj);

/**
 * @brief Retrieves the subscription handle associated with a message object.
 * 
 * This function gets the subscription handle from the message object.
 * 
 * @param message_obj A pointer to the message object.
 * @param subscription_obj A pointer to a pointer where the subscription handle will be stored.
 * 
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_Message__subscriptionHandle(const z_bmqa_Message* message_obj, const z_bmqt_SubscriptionHandle** subscription_obj);

/**
 * @brief Retrieves the compression algorithm type used by a message object.
 * 
 * This function returns the compression algorithm type enum used by the message.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return The compression algorithm type.
 */
z_bmqt_CompressionAlgorithmType::Enum z_bmqa_Message__compressionAlgorithmType(const z_bmqa_Message* message_obj);

#ifdef BMQ_ENABLE_MSG_GROUPID

/**
 * @brief Retrieves the group ID of a message object.
 * 
 * This function returns the group ID associated with the message object.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return A pointer to the group ID string.
 */
const char* z_bmqa_Message__groupId(const z_bmqa_Message* message_obj);

#endif

/**
 * @brief Retrieves the message GUID associated with a message object.
 * 
 * This function gets the message GUID from the message object.
 * 
 * @param message_obj A pointer to the message object.
 * @param messageGUID_obj A pointer to a pointer where the message GUID will be stored.
 * 
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_Message__messageGUID(const z_bmqa_Message* message_obj, const z_bmqt_MessageGUID** messageGUID_obj);

/**
 * @brief Retrieves the confirmation cookie associated with a message object.
 * 
 * This function gets the confirmation cookie from the message object.
 * 
 * @param message_obj A pointer to the message object.
 * @param cookie_obj A pointer to a pointer where the confirmation cookie will be stored.
 * 
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_Message__confirmationCookie(const z_bmqa_Message* message_obj, z_bmqa_MessageConfirmationCookie** cookie_obj);

/**
 * @brief Retrieves the acknowledgement status of a message object.
 * 
 * This function checks and returns the acknowledgement status of the message.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return The acknowledgement status as an integer.
 */
int z_bmqa_Message__ackStatus(const z_bmqa_Message* message_obj);

// Add once we figure out how to handle Blobs in C
// int z_bmqa_Message__getData(const z_bmqa_Message* message_obj, z_bdlbb_Blob* blob);

/**
 * @brief Retrieves the data from a message object.
 * 
 * This function retrieves the data from the message object and stores it in `buffer`.
 * 
 * @param message_obj A pointer to the message object.
 * @param buffer      A pointer to a pointer where the data will be stored.
 * 
 * @return Returns 0 upon successful retrieval.
 */
int z_bmqa_Message__getData(const z_bmqa_Message* message_obj, char** buffer);

/**
 * @brief Retrieves the data size of a message object.
 * 
 * This function returns the size of the data in the message object.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return The size of the data as an integer.
 */
int z_bmqa_Message__dataSize(const z_bmqa_Message* message_obj);

/**
 * @brief Checks if a message object has properties.
 * 
 * This function determines if the message object has any properties set.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return true if properties are present, false otherwise.
 */
bool z_bmqa_Message__hasProperties(const z_bmqa_Message* message_obj);

#ifdef BMQ_ENABLE_MSG_GROUPID

/**
 * @brief Checks if a message object has a group ID.
 * 
 * This function determines if the message object has a group ID set.
 * 
 * @param message_obj A pointer to the message object.
 * 
 * @return true if a group ID is present, false otherwise.
 */
bool z_bmqa_Message__hasGroupId(const z_bmqa_Message* message_obj);

#endif

/**
 * @brief Loads the properties of a message into a buffer.
 * 
 * This function copies the properties of the message into the provided buffer.
 * 
 * @param message_obj A pointer to the message object.
 * @param buffer      A pointer to the message properties buffer where the properties will be copied.
 * 
 * @return Returns 0 upon successful loading.
 */
int z_bmqa_Message__loadProperties(const z_bmqa_Message* message_obj, z_bmqa_MessageProperties* buffer);

#if defined(__cplusplus)
}
#endif

#endif
