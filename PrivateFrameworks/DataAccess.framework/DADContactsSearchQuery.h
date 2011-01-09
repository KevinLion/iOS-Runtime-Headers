/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface DADContactsSearchQuery : DADSearchQuery 
{
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(retain) NSString *searchScope; /* unknown property attribute: V_searchScope */
@property(retain) NSString *searchBase; /* unknown property attribute: V_searchBase */

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3;

- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;
- (BOOL)isEqualToDADContactsSearchQuery:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)searchScope;
- (void)setSearchScope:(id)arg1;
- (id)searchBase;
- (void)setSearchBase:(id)arg1;

@end