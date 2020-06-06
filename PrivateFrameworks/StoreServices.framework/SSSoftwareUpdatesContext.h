/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {

	NSString* _clientIdentifierHeader;
	BOOL _forced;
	NSArray* _softwareTypes;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifierHeader;              //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (getter=isForced,nonatomic,readonly) BOOL forced;                         //@synthesize forced=_forced - In the implementation block
@property (nonatomic,copy,readonly) NSArray * softwareTypes;                        //@synthesize softwareTypes=_softwareTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)clientIdentifierHeader;
-(NSArray *)softwareTypes;
-(BOOL)isForced;
@end

