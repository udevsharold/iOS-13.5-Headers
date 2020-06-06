/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFCodingOptions : NSObject <NSCopying> {

	id _codingOptionsInternal;

}

@property (assign,nonatomic) long long encoding; 
@property (nonatomic,copy) NSString * encryptionPassphrase; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)encoding;
-(void)setEncoding:(long long)arg1 ;
-(NSString *)encryptionPassphrase;
-(void)setEncryptionPassphrase:(NSString *)arg1 ;
@end

