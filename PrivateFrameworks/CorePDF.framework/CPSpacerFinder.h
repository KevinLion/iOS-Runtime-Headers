/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CPZone, NSMutableArray;

@interface CPSpacerFinder : NSObject <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int allocatedSize; 
        unsigned int size; 
        unsigned int count; 
        struct { /* ? */ } *stats; 
        struct { /* ? */ } **ordered; 
    struct { struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { 
            float x; 
            float width; 
        } x15; struct { 
            float x; 
            float width; 
        } x16; struct { 
            float x; 
            float width; 
        } x17; struct { 
            float x; 
            float width; 
    CPZone *contentZone;
        } x18; float x19; float x20; BOOL x21; BOOL x22; BOOL x23; } *qualityEntries;
    unsigned int segmentationCount;
    struct { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; unsigned char x3; void*x4; void*x5; void*x6; void*x7; void*x8; unsigned long x9; int x10; in void*x11; void*x12; unsigned int x13; struct { /* ? */ } *x14; } *segmentations;
    } spacerSequence;
    NSMutableArray *spacers;
    } textBounds;
    } zoneBounds;
}

- (void)assessQuality;
- (void)dealloc;
- (void)determineValidity;
- (void)dispose;
- (void)finalize;
- (void)findSpacers;
- (id)initWithContentZone:(id)arg1;
- (void)initializeJunctions;
- (void)initializeSegmentations;
- (id)spacers;
- (void)splitTextLines;

@end