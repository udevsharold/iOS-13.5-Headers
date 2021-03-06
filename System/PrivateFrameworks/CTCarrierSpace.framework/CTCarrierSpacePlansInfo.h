/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding> {

	NSArray* _planGroupsList;
	NSString* _morePlansURL;

}

@property (nonatomic,retain) NSArray * planGroupsList;              //@synthesize planGroupsList=_planGroupsList - In the implementation block
@property (nonatomic,retain) NSString * morePlansURL;               //@synthesize morePlansURL=_morePlansURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)morePlansURL;
-(void)setMorePlansURL:(NSString *)arg1 ;
-(NSArray *)planGroupsList;
-(void)setPlanGroupsList:(NSArray *)arg1 ;
@end

