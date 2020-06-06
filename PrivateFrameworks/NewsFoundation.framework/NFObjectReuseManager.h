/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NFObjectReuseManager : NSObject {

	/*^block*/id _reuseFactory;
	NSMutableDictionary* _inuseObjects;
	NSMutableDictionary* _reuseableObjects;

}

@property (nonatomic,copy) id reuseFactory;                                     //@synthesize reuseFactory=_reuseFactory - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * inuseObjects;                  //@synthesize inuseObjects=_inuseObjects - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * reuseableObjects;              //@synthesize reuseableObjects=_reuseableObjects - In the implementation block
-(NSMutableDictionary *)reuseableObjects;
-(id)reuseFactory;
-(NSMutableDictionary *)inuseObjects;
-(id)initWithObjectConstructor:(/*^block*/id)arg1 ;
-(id)dequeueObjectForIdentifier:(id)arg1 ;
-(void)prepareObjectForReuse:(id)arg1 ;
-(void)purgeObjectForIdentifier:(id)arg1 ;
-(BOOL)isInUse:(id)arg1 ;
-(id)inUseObjectForIdentifier:(id)arg1 ;
-(void)setReuseFactory:(id)arg1 ;
-(void)setInuseObjects:(NSMutableDictionary *)arg1 ;
-(void)setReuseableObjects:(NSMutableDictionary *)arg1 ;
@end

