/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSData* _scope;
	NSData* _promiseScope;
	NSURL* _promiseURL;

}

@property (nonatomic,copy) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (retain) NSURL * promiseURL;                 //@synthesize promiseURL=_promiseURL - In the implementation block
@property (retain) NSData * scope;                     //@synthesize scope=_scope - In the implementation block
@property (retain) NSData * promiseScope;              //@synthesize promiseScope=_promiseScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4 ;
+(id)wrapperWithURL:(id)arg1 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
+(id)wrapperWithURL:(id)arg1 extensionClass:(const char*)arg2 error:(id*)arg3 ;
+(id)wrapperWithSecurityScopedURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(NSURL *)promiseURL;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)scope;
-(void)setScope:(NSData *)arg1 ;
-(void)setPromiseScope:(NSData *)arg1 ;
-(NSData *)promiseScope;
@end
