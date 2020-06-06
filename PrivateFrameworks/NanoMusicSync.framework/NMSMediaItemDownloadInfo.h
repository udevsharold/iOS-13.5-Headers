/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface NMSMediaItemDownloadInfo : NSObject {

	BOOL _manuallyAdded;
	NSNumber* _identifier;
	unsigned long long _size;

}

@property (nonatomic,readonly) NSNumber * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                //@synthesize size=_size - In the implementation block
@property (getter=isManuallyAdded,nonatomic,readonly) BOOL manuallyAdded;              //@synthesize manuallyAdded=_manuallyAdded - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSNumber *)identifier;
-(unsigned long long)size;
-(BOOL)isManuallyAdded;
-(id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 ;
@end

