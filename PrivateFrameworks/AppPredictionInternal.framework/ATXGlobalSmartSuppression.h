/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASCFBurstTrie;

@interface ATXGlobalSmartSuppression : NSObject {

	_PASCFBurstTrie* _associationScoresTrie;

}
+(int)decodeGeoAssociationScoreAtGeoHashResolution:(unsigned long long)arg1 forEncodedScore:(int)arg2 ;
+(int)decodeAssociationScoreForContext:(unsigned long long)arg1 forEncodedScore:(int)arg2 ;
-(id)init;
-(id)fetchContextualAssociationScoresForBundleId:(id)arg1 ;
@end

