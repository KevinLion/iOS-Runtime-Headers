/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface VCVoiceShortcutClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (void)initialize;
+ (id)standardClient;

- (void).cxx_destruct;
- (void)createVoiceShortcutWithWorkflow:(id)arg1 phrase:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)describeSyncStateIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)getCloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)getNumberOfVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id)remoteDataStoreWithErrorHandler:(id /* block */)arg1;
- (void)requestSyncForServiceClassName:(id)arg1 forceReset:(bool)arg2 completion:(id /* block */)arg3;
- (void)scheduleVocabularySyncToServer:(id /* block */)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (void)subscribeToVoiceShortcutDataUpdateNotifications;
- (void)unsubscribeFromVoiceShortcutDataUpdateNotifications;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 completion:(id /* block */)arg4;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(id /* block */)arg2;
- (id)xpcConnection;

@end