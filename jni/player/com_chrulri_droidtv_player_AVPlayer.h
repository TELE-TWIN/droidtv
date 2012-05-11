/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_chrulri_droidtv_player_AVPlayer */

#ifndef _Included_com_chrulri_droidtv_player_AVPlayer
#define _Included_com_chrulri_droidtv_player_AVPlayer
#ifdef __cplusplus
extern "C" {
#endif
#undef com_chrulri_droidtv_player_AVPlayer_STATE_UNKNOWN
#define com_chrulri_droidtv_player_AVPlayer_STATE_UNKNOWN 0L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_UNINITIALIZED
#define com_chrulri_droidtv_player_AVPlayer_STATE_UNINITIALIZED 1L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_PREPARING
#define com_chrulri_droidtv_player_AVPlayer_STATE_PREPARING 2L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_PREPARED
#define com_chrulri_droidtv_player_AVPlayer_STATE_PREPARED 3L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_PLAYING
#define com_chrulri_droidtv_player_AVPlayer_STATE_PLAYING 4L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_ERROR
#define com_chrulri_droidtv_player_AVPlayer_STATE_ERROR 5L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_FINISHED
#define com_chrulri_droidtv_player_AVPlayer_STATE_FINISHED 6L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_STARTING
#define com_chrulri_droidtv_player_AVPlayer_STATE_STARTING 7L
#undef com_chrulri_droidtv_player_AVPlayer_STATE_STOPPING
#define com_chrulri_droidtv_player_AVPlayer_STATE_STOPPING 8L
/*
 * Class:     com_chrulri_droidtv_player_AVPlayer
 * Method:    _initialize
 * Signature: (Ljava/lang/ref/WeakReference;)V
 */
JNIEXPORT void JNICALL Java_com_chrulri_droidtv_player_AVPlayer__1initialize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_chrulri_droidtv_player_AVPlayer
 * Method:    _finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_chrulri_droidtv_player_AVPlayer__1finalize
  (JNIEnv *, jobject);

/*
 * Class:     com_chrulri_droidtv_player_AVPlayer
 * Method:    _prepare
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_chrulri_droidtv_player_AVPlayer__1prepare
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_chrulri_droidtv_player_AVPlayer
 * Method:    _start
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_chrulri_droidtv_player_AVPlayer__1start
  (JNIEnv *, jobject);

/*
 * Class:     com_chrulri_droidtv_player_AVPlayer
 * Method:    _stop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_chrulri_droidtv_player_AVPlayer__1stop
  (JNIEnv *, jobject);

/*
 * Class:     com_chrulri_droidtv_player_AVPlayer
 * Method:    _getState
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_chrulri_droidtv_player_AVPlayer__1getState
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
