/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray, NSError;

@interface ASDExternalManifestResponse : ASDRequestResponse {

	NSArray* _results;

}

@property (copy) NSError * error; 
@property (nonatomic,readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
@property (assign) BOOL success; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)results;
-(id)initWithResults:(id)arg1 ;
@end

