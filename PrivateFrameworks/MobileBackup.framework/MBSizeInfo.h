/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MBSizeInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _size;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
@end

