/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairHandshake : IDSSocketPairMessage {

	unsigned _versionNumber;

}

@property (nonatomic,readonly) unsigned versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
-(unsigned)versionNumber;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersionNumber:(unsigned)arg1 ;
@end

