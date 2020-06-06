/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFDashBoardViewMetrics : NSObject
+(BOOL)_isPortrait;
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(double)timeLabelToSubtitleLabelDifferenceY;
+(BOOL)_presentsListBelowDateTime;
+(CGRect)suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(CGRect)arg2 insets:(UIEdgeInsets)arg3 ;
+(BOOL)listScrollsDateTime;
+(CGRect)suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(CGRect)arg2 insets:(UIEdgeInsets)arg3 scrollsDateTime:(BOOL)arg4 ;
+(CGRect)_reducedPageBoundsFromBounds:(CGRect)arg1 forPage:(unsigned long long)arg2 ;
+(UIEdgeInsets)suggestedContentInsetsForListForPage:(unsigned long long)arg1 pageBounds:(CGRect)arg2 scrollsDateTime:(BOOL)arg3 ;
+(unsigned long long)listLayoutForPage:(unsigned long long)arg1 ;
+(double)listMinYForPage:(unsigned long long)arg1 ;
+(BOOL)layoutUsesMargin:(unsigned long long)arg1 ;
+(BOOL)layoutCentersContent:(unsigned long long)arg1 ;
+(double)listWidthForPage:(unsigned long long)arg1 ;
+(double)listInsetXForPage:(unsigned long long)arg1 ;
+(double)listInsetXForPage:(unsigned long long)arg1 leading:(BOOL)arg2 ;
+(double)searchClippingLineMaxY;
+(unsigned long long)dateTimeLayoutForPage:(unsigned long long)arg1 ;
+(CGRect)suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(CGRect)arg2 ;
+(double)timeToListInsetXforPage:(unsigned long long)arg1 ;
+(double)_dateTimeMinXForReducedBounds:(CGRect)arg1 forPage:(unsigned long long)arg2 ;
+(double)timeLabelBaselineY;
+(double)timeSubtitleBaselineY;
+(double)_padSpecificValueJ99:(double)arg1 otherPad:(double)arg2 ;
+(double)_phoneSpecificValueN56:(double)arg1 n61:(double)arg2 n69:(double)arg3 d22:(double)arg4 ;
+(double)timeToSubtitleLabelBaselineDifferenceY;
+(id)dateOnlyLunarDateFont;
+(double)_phoneSpecificValueN56:(double)arg1 n61:(double)arg2 n69:(double)arg3 ;
+(double)dateBaselineToListY;
+(double)_padSpecificValueForDevice:(SBFDashBoardOrientationLeadingInsets)arg1 leading:(BOOL)arg2 ;
+(double)_padSpecificInsets:(SBFDashBoardPadPageInsets)arg1 leading:(BOOL)arg2 ;
+(double)searchBarWidth;
+(UIEdgeInsets)suggestedContentInsetsForListForPage:(unsigned long long)arg1 pageBounds:(CGRect)arg2 ;
+(CGRect)suggestedFrameForMediaControlsForPageBounds:(CGRect)arg1 ;
+(CGRect)suggestedFrameForMediaArtworkForControlsFrame:(CGRect)arg1 bottomInset:(double)arg2 inPageBounds:(CGRect)arg3 ;
+(CGRect)suggestedFrameForCallToActionLabel:(id)arg1 yOffset:(double)arg2 inBounds:(CGRect)arg3 ;
+(double)timeLabelScrollPercentForPage:(unsigned long long)arg1 ;
+(CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(CGRect)arg1 centeredX:(BOOL)arg2 ;
+(UIEdgeInsets)_cachedGlyphInsetsForString:(id)arg1 withFont:(id)arg2 ;
+(double)timeLabelToLunarDateLabelDifferenceY;
+(double)dateOnlyLabelToLunarDateLabelBaselineDifferenceY;
+(id)dateFont;
+(double)singleLineDateViewBaselineDifferenceY;
+(CGRect)suggestedFrameForStatusView:(id)arg1 inView:(id)arg2 withInsets:(UIEdgeInsets)arg3 ;
@end

