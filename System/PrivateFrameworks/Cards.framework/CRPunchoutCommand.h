/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@class SFPunchout, NSString, NSDictionary;

@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand> {

	SFPunchout* _punchout;

}

@property (nonatomic,retain) SFPunchout * punchout;                              //@synthesize punchout=_punchout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (nonatomic,retain) id<NSSecureCoding><NSCopying> payload; 
-(BOOL)handleForCardViewController:(id)arg1 cardViewControllerDelegate:(id)arg2 ;
-(unsigned long long)inuickp_intrinsicInteractiveBehavior;
-(id)crk_backingPunchout;
-(BOOL)handleForCardViewController:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSSecureCoding><NSCopying>)payload;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
@end

