/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {

	NSMutableArray* _originalRequests;
	NSMutableDictionary* _kindToOriginalRequestsMapping;
	NSMutableDictionary* _detectorConfigurationOptions;

}
-(id)init;
-(id)originalRequests;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2 ;
-(id)detectorConfigurationOptions;
-(void)enumerateOriginalRequestsByKindUsingBlock:(/*^block*/id)arg1 ;
-(id)processingDevice;
-(BOOL)preferBackgroundProcessing;
@end

