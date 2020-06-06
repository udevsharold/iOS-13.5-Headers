/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject {

	NSUUID* _UUID;
	/*^block*/id _updateBlock;

}

@property (retain) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
@end

