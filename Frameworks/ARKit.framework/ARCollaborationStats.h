/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARCollaborationStats : NSObject {

	BOOL _originAnchorMerged;
	unsigned long long _localSessionIdentifier;
	unsigned long long _mergedKeyframesCount;
	unsigned long long _remainingKeyframesCount;
	unsigned long long _remainingWeakKeyframesCount;
	unsigned long long _externalKeyframesCount;
	unsigned long long _externalWeakKeyframesCount;
	unsigned long long _anchorsCount;

}

@property (assign,nonatomic) unsigned long long localSessionIdentifier;                   //@synthesize localSessionIdentifier=_localSessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long mergedKeyframesCount;                     //@synthesize mergedKeyframesCount=_mergedKeyframesCount - In the implementation block
@property (assign,nonatomic) unsigned long long remainingKeyframesCount;                  //@synthesize remainingKeyframesCount=_remainingKeyframesCount - In the implementation block
@property (assign,nonatomic) unsigned long long remainingWeakKeyframesCount;              //@synthesize remainingWeakKeyframesCount=_remainingWeakKeyframesCount - In the implementation block
@property (assign,nonatomic) unsigned long long externalKeyframesCount;                   //@synthesize externalKeyframesCount=_externalKeyframesCount - In the implementation block
@property (assign,nonatomic) unsigned long long externalWeakKeyframesCount;               //@synthesize externalWeakKeyframesCount=_externalWeakKeyframesCount - In the implementation block
@property (assign,nonatomic) unsigned long long anchorsCount;                             //@synthesize anchorsCount=_anchorsCount - In the implementation block
@property (assign,nonatomic) BOOL originAnchorMerged;                                     //@synthesize originAnchorMerged=_originAnchorMerged - In the implementation block
-(void)setLocalSessionIdentifier:(unsigned long long)arg1 ;
-(void)setMergedKeyframesCount:(unsigned long long)arg1 ;
-(void)setRemainingKeyframesCount:(unsigned long long)arg1 ;
-(void)setRemainingWeakKeyframesCount:(unsigned long long)arg1 ;
-(void)setExternalKeyframesCount:(unsigned long long)arg1 ;
-(void)setExternalWeakKeyframesCount:(unsigned long long)arg1 ;
-(void)setAnchorsCount:(unsigned long long)arg1 ;
-(void)setOriginAnchorMerged:(BOOL)arg1 ;
-(unsigned long long)localSessionIdentifier;
-(unsigned long long)mergedKeyframesCount;
-(unsigned long long)remainingKeyframesCount;
-(unsigned long long)remainingWeakKeyframesCount;
-(unsigned long long)externalKeyframesCount;
-(unsigned long long)externalWeakKeyframesCount;
-(unsigned long long)anchorsCount;
-(BOOL)originAnchorMerged;
@end

