/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface HDDescription : NSObject <NSCopying> {

	NSMutableDictionary* _parameters;
	NSString* _summary;
	NSDictionary* _metadata;

}

@property (nonatomic,copy) NSString * summary;                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters; 
+(id)descriptionWithSummary:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)parameters;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithSummary:(id)arg1 ;
-(void)addParameter:(id)arg1 forName:(id)arg2 ;
-(BOOL)validateAgainstValues:(id)arg1 error:(id*)arg2 ;
@end

