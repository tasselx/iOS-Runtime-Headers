/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

@class <AXUIMessageSenderDelegate>, AXAccessQueue, NSMutableArray;

@interface AXUIMessageSender : NSObject {
    <AXUIMessageSenderDelegate> *_delegate;
    NSMutableArray *_messageQueue;
    AXAccessQueue *_messageSchedulingSerializationQueue;
    BOOL _sendingMessage;
}

@property <AXUIMessageSenderDelegate> * delegate;
@property(retain) NSMutableArray * messageQueue;
@property(retain) AXAccessQueue * messageSchedulingSerializationQueue;
@property(getter=isSendingMessage) BOOL sendingMessage;

- (void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void*)arg2;
- (void)_performBlock:(id)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(BOOL)arg3;
- (void)_sendXPCMessage:(id)arg1 context:(void*)arg2 remainingAttempts:(unsigned int)arg3 previousError:(id)arg4 completion:(id)arg5;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isSendingMessage;
- (id)messageQueue;
- (id)messageSchedulingSerializationQueue;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 context:(void*)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(BOOL)arg5 completion:(id)arg6;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned int)arg2 context:(void*)arg3 error:(id*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setMessageQueue:(id)arg1;
- (void)setMessageSchedulingSerializationQueue:(id)arg1;
- (void)setSendingMessage:(BOOL)arg1;

@end