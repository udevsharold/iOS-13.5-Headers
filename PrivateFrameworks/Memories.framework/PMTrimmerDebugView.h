/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/PMPassthroughView.h>

@protocol DebugDataSourceProtocol;
@class PHAsset, UILabel;

@interface PMTrimmerDebugView : PMPassthroughView {

	int _duration;
	PHAsset* _asset;
	UILabel* _label;
	id<DebugDataSourceProtocol> _debugDataSource;

}

@property (nonatomic,retain) PHAsset * asset;                                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) int duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<DebugDataSourceProtocol> debugDataSource;              //@synthesize debugDataSource=_debugDataSource - In the implementation block
+(id)createViewAndAddToParentView:(id)arg1 ;
-(int)duration;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setDuration:(int)arg1 ;
-(void)_resetRangeModelLayers;
-(id)colorWithPatternColors:(id)arg1 baseColor:(id)arg2 ;
-(void)_addRangeLayerWithColor:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 height:(double)arg5 ;
-(void)_addRangeLayerWithColor:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 markEnds:(BOOL)arg5 ;
-(id<DebugDataSourceProtocol>)debugDataSource;
-(void)_addAnalysisIndicators;
-(void)addSuggestionsToRanges:(id)arg1 ;
-(void)addClipsToRanges:(id)arg1 ;
-(id)_rangeModelsByType:(id)arg1 ;
-(id)colorForMetadataRange:(id)arg1 ;
-(BOOL)isOverlapWithPreviousRangeForIndex:(unsigned long long)arg1 inRangeModels:(id)arg2 ;
-(id)_attributedStringWithColoredLabelsForKeys:(id)arg1 withRangeModelsByType:(id)arg2 ;
-(void)_addAutoEditScore:(id)arg1 lastLaneOfTypeOffset:(double*)arg2 ;
-(id)baseColorForMetadataRangeTypeKey:(id)arg1 ;
-(id)colorPatternForRatingRange:(id)arg1 baseColor:(id)arg2 ;
-(id)colorPatternForCameraMotionRange:(id)arg1 ;
-(id)colorPatternForQualityRange:(id)arg1 ;
-(id)colorPatternForInterestingnessRange:(id)arg1 ;
-(id)colorPatternForFineActionRange:(id)arg1 ;
-(void)setDebugDataSource:(id<DebugDataSourceProtocol>)arg1 ;
-(void)reloadRanges;
@end

