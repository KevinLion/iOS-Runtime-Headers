/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, TSCHChartAbstractAreaLayoutItem, TSCHChartInfo, TSCHChartModel, TSCHLegendAreaLayoutItem;

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent> {
    struct { 
        BOOL forceOmitLegend; 
        BOOL forceOmitTitle; 
        BOOL forceOmitAxisTitle; 
        BOOL enable3DTightBounds; 
        BOOL enable3DScaledDepthBounds; 
        BOOL enable3DSageMaxDepthRatio; 
        unsigned int max3DLimitingSeries; 
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
    struct CGSize { 
        float width; 
        float height; 
    TSCHChartAbstractAreaLayoutItem *mChartArea;
    TSCHChartInfo *mChartInfo;
    } mChartInnerFrame;
    TSCHChartModel *mChartModel;
    BOOL mInResize;
    } mLayoutSettings;
    TSCHLegendAreaLayoutItem *mLegend;
    } mLegendInnerFrame;
    NSDictionary *mSeriesIndexedPieWedgeExplosions;
    } mStartingSize;
}

@property(readonly) TSCHChartAbstractAreaLayoutItem * chartAreaLayoutItem;
@property unsigned int dataSetIndex;
@property(readonly) TSCHLegendAreaLayoutItem * legendAreaLayoutItem;
@property(copy) NSDictionary * seriesIndexedPieWedgeExplosions;

- (void)beginResizeWithStartingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)buildSubTree;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (id)chartAreaLayoutItem;
- (id)chartInfo;
- (void)clearAll;
- (void)clearParent;
- (unsigned int)dataSetIndex;
- (void)dealloc;
- (void)endResizeOperation;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithParent:(id)arg1;
- (void)invalidateTransientModel;
- (BOOL)isInResize;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })layoutSettings;
- (id)legendAreaLayoutItem;
- (id)model;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)arg1;
- (id)root;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setChartBodySize:(struct CGSize { float x1; float x2; })arg1;
- (void)setChartInnerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 legendInnerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setDataSetIndex:(unsigned int)arg1;
- (void)setLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg1;
- (void)setLegendSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (struct CGSize { float x1; float x2; })startingSize;
- (void)updateLayoutOffset;
- (void)updateLayoutSize;
- (void)updatePieWedgeExplosionsFromModel;
- (void)updateSizeDuringResizeTo:(struct CGSize { float x1; float x2; })arg1;

@end