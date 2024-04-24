#ifndef INCLUDED_Z_BMQA_CONFIRMEVENTBUILDER
#define INCLUDED_Z_BMQA_CONFIRMEVENTBUILDER

#if defined(__cplusplus)
extern "C" {
#endif

#include <z_bmqa_message.h>
#include <z_bmqt_types.h>

typedef struct z_bmqa_ConfirmEventBuilder z_bmqa_ConfirmEventBuilder;
typedef struct z_bmqa_MessageConfirmationCookie
    z_bmqa_MessageConfirmationCookie;

/**
 * @brief Deletes the memory allocated for a pointer to a bmqa::ConfirmEventBuilder object.
 *
 * This function deallocates the memory pointed to by the input pointer to a bmqa::ConfirmEventBuilder object and sets the pointer to NULL.
 * 
 * @param builder_obj A pointer to a pointer to a bmqa::ConfirmEventBuilder object.
 *                    Upon successful completion, this pointer will be set to NULL.
 * @return Returns 0 upon successful deletion.
 */
int z_bmqa_ConfirmEventBuilder__delete(
    z_bmqa_ConfirmEventBuilder** builder_obj);

/**
 * @brief Creates a new instance of bmqa::ConfirmEventBuilder and assigns it to a builder object.
 *
 * This function allocates a new bmqa::ConfirmEventBuilder, and safely casts it to a z_bmqa_ConfirmEventBuilder type before
 * assigning it to the provided double pointer.
 * 
 * @param builder_obj A double pointer to a z_bmqa_ConfirmEventBuilder object that will hold the newly created builder.
 *                    This parameter is modified to point to the newly allocated bmqa::ConfirmEventBuilder.
 * @return Returns 0 upon successful creation of the event builder.
 */
int z_bmqa_ConfirmEventBuilder__create(
    z_bmqa_ConfirmEventBuilder** builder_obj);

/**
 * @brief Adds a message confirmation to the ConfirmEventBuilder.
 *
 * This function casts the provided builder and message objects to their corresponding
 * types within the BloombergLP namespace and then calls the addMessageConfirmation method
 * to register the message as confirmed.
 * 
 * @param builder_obj A pointer to z_bmqa_ConfirmEventBuilder, representing the builder to which the message confirmation will be added.
 * @param message A constant pointer to z_bmqa_Message, representing the message to confirm.
 * @return Returns the result of the addMessageConfirmation method from the bmqa::ConfirmEventBuilder class.
 */
int z_bmqa_ConfirmEventBuilder__addMessageConfirmation(
    z_bmqa_ConfirmEventBuilder* builder_obj,
    const z_bmqa_Message*       message);

/**
 * @brief Adds a message confirmation with a specified cookie to a builder object.
 *
 * This function integrates a cookie into the event confirmation process by passing it to the builder object's 
 * addMessageConfirmation method. The conversion between external types (z_bmqa_) and internal Bloomberg types (bmqa_)
 * is handled within this function.
 * 
 * @param builder_obj A pointer to an instance of z_bmqa_ConfirmEventBuilder which is used to build confirmation events.
 * @param cookie A pointer to a constant z_bmqa_MessageConfirmationCookie containing the cookie data for the confirmation.
 * @returns Returns an integer status code resulting from the addMessageConfirmation method of the builder object.
 */
int z_bmqa_ConfirmEventBuilder__addMessageConfirmationWithCookie(
    z_bmqa_ConfirmEventBuilder*             builder_obj,
    const z_bmqa_MessageConfirmationCookie* cookie);


/**
 * @brief Resets the state of the ConfirmEventBuilder.
 *
 * This function resets the state of the ConfirmEventBuilder to its initial configuration, effectively clearing all previously set parameters or states.
 * 
 * @param builder_obj A pointer to an opaque ConfirmEventBuilder object used in interfacing with the BloombergLP API.
 * @return Returns 0 upon successful reset.
 */
int z_bmqa_ConfirmEventBuilder__reset(z_bmqa_ConfirmEventBuilder* builder_obj);

/**
 * @brief Retrieves the count of messages in a ConfirmEventBuilder.
 *
 * This function returns the number of messages that have been added to the ConfirmEventBuilder
 * instance pointed to by the input parameter.
 * 
 * @param builder_obj A pointer to a constant z_bmqa_ConfirmEventBuilder object, representing
 *                    an opaque handle to an underlying ConfirmEventBuilder instance.
 * @return Returns the number of messages currently held in the ConfirmEventBuilder.
 */
int z_bmqa_ConfirmEventBuilder__messageCount(
    const z_bmqa_ConfirmEventBuilder* builder_obj);


/**
 * @brief Translates a blob from the internal BloombergLP format to a client-readable format.
 *
 * This function takes a pointer to a z_bmqa_ConfirmEventBuilder object and retrieves a blob from it. It then sets the provided blob_obj pointer
 * to point to this blob, translated to the z_bmqt_Blob type.
 * 
 * @param builder_obj A pointer to a z_bmqa_ConfirmEventBuilder object from which the blob will be retrieved.
 * @param blob_obj A pointer to a pointer to a const z_bmqt_Blob. This pointer is set to point to the retrieved blob.
 * @return Returns 0 upon successful execution.
 */
int z_bmqa_ConfirmEventBuilder__blob(
    const z_bmqa_ConfirmEventBuilder* builder_obj,
    const z_bmqt_Blob**               blob_obj);

#if defined(__cplusplus)
}
#endif

#endif