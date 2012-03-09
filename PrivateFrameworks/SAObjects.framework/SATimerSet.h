/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SATimerObject;

@interface SATimerSet : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SATimerObject * timer;

+ (id)set;
+ (id)setWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setTimer:(id)arg1;
- (id)timer;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end