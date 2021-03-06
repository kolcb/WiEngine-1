/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_AtlasNode */

#ifndef _Included_com_wiyun_engine_nodes_AtlasNode
#define _Included_com_wiyun_engine_nodes_AtlasNode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    getBlendFuncSrc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_AtlasNode_getBlendFuncSrc
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    getBlendFuncDst
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_AtlasNode_getBlendFuncDst
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    setBlendFunc
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_AtlasNode_setBlendFunc
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_AtlasNode_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_AtlasNode_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_AtlasNode_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    nativeSetColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_AtlasNode_nativeSetColor
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    nativeGetTexture
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_AtlasNode_nativeGetTexture
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_AtlasNode
 * Method:    setTexture
 * Signature: (Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_AtlasNode_setTexture
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
