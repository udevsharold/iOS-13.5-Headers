/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicy.h>

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {

	NSMutableDictionary* _policyData;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)perDomainDictsForPolicy;
-(void)_setPolicyData:(id)arg1 ;
-(void)_cleanUpPolicyData:(id)arg1 ;
@end

