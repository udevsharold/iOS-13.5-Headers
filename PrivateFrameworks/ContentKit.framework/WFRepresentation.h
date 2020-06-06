/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFTyping.h>
#import <libobjc.A.dylib/WFCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFType, NSString;

@interface WFRepresentation : NSObject <WFNaming, WFTyping, WFCopying, NSSecureCoding>

@property (getter=isEncodable,nonatomic,readonly) BOOL encodable; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,readonly) WFType * wfType; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEncodable;
-(id)copyWithName:(id)arg1 ;
-(NSString *)wfName;
-(WFType *)wfType;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
@end

