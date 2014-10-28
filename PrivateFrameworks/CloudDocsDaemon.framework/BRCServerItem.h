/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRCItemID, BRCServerContainer, BRCStatInfo, BRCVersion, NSNumber, NSString;

@interface BRCServerItem : NSObject <BRCItem> {
    BRCServerContainer *_container;
    BRCItemID *_itemID;
    BRCVersion *_latestVersion;
    BOOL _needsInsert;
    NSString *_originalName;
    NSNumber *_rank;
    BRCStatInfo *_st;
}

@property(readonly) BRCServerContainer * container;
@property(readonly) BOOL isAlias;
@property(readonly) BOOL isDead;
@property(readonly) BOOL isDirectory;
@property(readonly) BOOL isDocument;
@property(readonly) BOOL isLive;
@property(readonly) BRCItemID * itemID;
@property(readonly) BRCVersion * latestVersion;
@property(readonly) NSString * originalName;
@property(readonly) NSNumber * rank;
@property(readonly) BRCStatInfo * st;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerItem:(id)arg1;
- (BOOL)isAlias;
- (BOOL)isDead;
- (BOOL)isDirectory;
- (BOOL)isDocument;
- (BOOL)isLive;
- (id)itemID;
- (id)latestVersion;
- (id)originalName;
- (id)rank;
- (id)st;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end