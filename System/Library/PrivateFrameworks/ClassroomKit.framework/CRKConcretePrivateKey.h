/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKPrivateKey.h>

@class NSData, NSString;

@interface CRKConcretePrivateKey : NSObject <CRKPrivateKey> {

	_SecKey* _underlyingPrivateKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) _SecKey* underlyingPrivateKey;                 //@synthesize underlyingPrivateKey=_underlyingPrivateKey - In the implementation block
+(id)privateKeyWithData:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSData *)dataRepresentation;
-(_SecKey*)underlyingPrivateKey;
-(id)initWithPrivateKey:(_SecKey*)arg1 ;
@end
