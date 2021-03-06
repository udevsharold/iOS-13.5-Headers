/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CSAsset, NSDictionary;

@interface CSSpIdContext : NSObject {

	NSString* _uniqueUttTag;
	unsigned long long _activeChannel;
	CSAsset* _asset;
	CSAsset* _fallbackAsset;
	NSString* _locale;
	NSDictionary* _vtEventInfo;
	unsigned long long _invocationStyle;

}

@property (assign,nonatomic) unsigned long long invocationStyle;              //@synthesize invocationStyle=_invocationStyle - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSDictionary * vtEventInfo;                      //@synthesize vtEventInfo=_vtEventInfo - In the implementation block
@property (nonatomic,retain) NSString * uniqueUttTag;                         //@synthesize uniqueUttTag=_uniqueUttTag - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,readonly) CSAsset * fallbackAsset;                       //@synthesize fallbackAsset=_fallbackAsset - In the implementation block
@property (nonatomic,readonly) NSString * locale;                             //@synthesize locale=_locale - In the implementation block
-(id)description;
-(NSString *)locale;
-(CSAsset *)asset;
-(void)setAsset:(CSAsset *)arg1 ;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(NSDictionary *)vtEventInfo;
-(CSAsset *)fallbackAsset;
-(unsigned long long)invocationStyle;
-(void)setInvocationStyle:(unsigned long long)arg1 ;
-(NSString *)uniqueUttTag;
-(id)utteranceAudioFilepathForSpIdType:(unsigned long long)arg1 ;
-(id)utteranceMetadataFilePathForSpIdType:(unsigned long long)arg1 ;
-(id)initWithSpIdInvocationStyle:(unsigned long long)arg1 asset:(id)arg2 fallbackAsset:(id)arg3 locale:(id)arg4 vtEventInfo:(id)arg5 ;
-(void)setUniqueUttTag:(NSString *)arg1 ;
-(void)setVtEventInfo:(NSDictionary *)arg1 ;
@end

