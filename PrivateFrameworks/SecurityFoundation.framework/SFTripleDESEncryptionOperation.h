/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFSymmetricEncryptionOperation.h>

@class _SFTripleDESKeySpecifier;

@interface SFTripleDESEncryptionOperation : SFSymmetricEncryptionOperation {

	id _tripleDESEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFTripleDESKeySpecifier * encryptionKeySpecifier; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
@end

