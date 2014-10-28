/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface HKObserverQuery : HKQuery {
    id _updateHandler;
}

@property(readonly) id updateHandler;

+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(id)arg3;
- (id)updateHandler;

@end