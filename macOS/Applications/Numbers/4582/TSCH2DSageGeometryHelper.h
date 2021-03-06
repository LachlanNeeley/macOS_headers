//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHSageGeometryHelper.h"

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper
{
    double mVerticalAxisOverhang;
    double mHorizontalAxisOverhang;
    double mRightAxisWidthChange;
    double mBottomAxisHeightChange;
    double mTopAxisHeightChange;
    struct CGSize mBottomLeftChartTitleOverhang;
    struct CGSize mTopRightChartTitleOverhang;
    struct CGSize mBottomLeftValueAxisTitleOverhang;
    struct CGSize mTopRightValueAxisTitleOverhang;
    struct CGSize mBottomLeftCategoryAxisTitleOverhang;
    struct CGSize mTopRightCategoryAxisTitleOverhang;
    struct CGSize mBottomLeftValueAxisY2TitleOverhang;
    struct CGSize mTopRightValueAxisY2TitleOverhang;
    struct CGRect mChartBodyBounds;
    struct CGRect mExplodedBounds;
    struct CGRect mChartTitleBounds;
    struct CGRect mValueAxisTitleBounds;
    struct CGRect mCategoryAxisTitleBounds;
    struct CGRect mValueAxisY2TitleBounds;
    struct CGRect mTopLegendBounds;
    struct CGRect mLeftLegendBounds;
    struct CGRect mBottomLegendBounds;
    struct CGRect mRightLegendBounds;
    struct CGRect mTopAxisLabelsBounds;
    struct CGRect mLeftAxisLabelsBounds;
    struct CGRect mBottomAxisLabelsBounds;
    struct CGRect mRightAxisLabelsBounds;
    struct CGRect mTopAxisBounds;
    struct CGRect mLeftAxisBounds;
    struct CGRect mBottomAxisBounds;
    struct CGRect mRightAxisBounds;
    struct CGPoint mExplodedBodyShift;
    struct CGPoint mOutsideLabelsChartTitleShift;
    BOOL mChartLayoutValid;
    BOOL mChartExplodedSizeValid;
    BOOL mChartAxisSizeValid;
    BOOL mChartAxisLabelsSizeValid;
    BOOL mChartTitleSizeValid;
    BOOL mValueAxisTitleSizeValid;
    BOOL mCategoryAxisTitleSizeValid;
    BOOL mValueAxisY2TitleSizeValid;
    BOOL mChartLegendSizeValid;
    BOOL mChartValueElementsGeometryValid;
}

+ (struct CGRect)computeSageChartAreaBoundsForChartInfo:(id)arg1 geometryRect:(struct CGRect)arg2 returningContainingViewportSize:(id *)arg3;
- (struct CGSize)measureText:(id)arg1 withParagraphStyle:(id)arg2;
- (double)seriesCategoryLabelsHorizontalGutter;
- (double)seriesCategoryLabelsVerticalGutter;
- (double)distanceFromYAxisUsingParagraphStyle:(id)arg1;
- (double)distanceFromXAxisUsingParagraphStyle:(id)arg1;
- (double)yAxisTitlePadding:(BOOL)arg1;
- (double)xAxisTitlePadding;
- (double)chartTitlePadding;
- (double)yAxisLabelHeight:(BOOL)arg1;
- (double)xAxisLabelHeight;
- (double)fontHeight:(id)arg1;
- (double)_horizontalAxisLabelsHeight;
- (double)_verticalAxisLabelsWidth:(_Bool)arg1;
- (double)_topAxisOuterWidth;
- (double)_rightAxisOuterWidth;
- (double)_bottomAxisOuterWidth;
- (double)_leftAxisOuterWidth;
- (double)p_widthFromTicksAndStrokeForAxis:(id)arg1;
- (double)_seriesSymbolWidth;
- (void)calculateChartBodySize;
- (BOOL)calculateChartExplodedSize;
- (void)calculateValueAxisY2TitleSize;
- (void)calculateCategoryAxisTitleSize;
- (void)calculateValueAxisTitleSize;
- (void)calculateChartTitleSize;
- (void)calculateChartAxisSize;
- (BOOL)topAxisLabelsVisible;
- (BOOL)bottomAxisLabelsVisible;
- (BOOL)rightAxisLabelsVisible;
- (BOOL)leftAxisLabelsVisible;
- (BOOL)p_labelsVisible:(id)arg1;
- (void)calculateChartAxisLabelsSize;
- (struct CGRect)computeSageLayoutCBBForSpiceDoc:(BOOL)arg1;
- (id)p_model;
- (BOOL)aspectRatioLocked;
- (BOOL)isScatter;
- (BOOL)isLine;
- (BOOL)isArea;
- (BOOL)isPie;
- (BOOL)isVertical;

@end

