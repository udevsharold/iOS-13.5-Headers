/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying> {

	ASDPropertyAddress* _address;
	id _value;

}

@property (nonatomic,readonly) ASDPropertyAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) id value;                                    //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(ASDPropertyAddress *)address;
-(id)initWithAddress:(id)arg1 value:(id)arg2 ;
@end

