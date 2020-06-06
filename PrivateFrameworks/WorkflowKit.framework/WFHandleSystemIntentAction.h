/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleIntentAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class INIntentDescription, NSArray, NSString;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {

	int _token;
	INIntentDescription* _intentDescription;
	NSArray* _supportedAppIdentifiers;
	NSArray* _supportedIdentifiers;

}

@property (nonatomic,readonly) int token;                                   //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSArray * supportedIdentifiers;              //@synthesize supportedIdentifiers=_supportedIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)token;
-(id)appIdentifier;
-(long long)intentCategory;
-(id)intentDescription;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(id)slots;
-(id)copyWithSerializedParameters:(id)arg1 ;
-(id)actionForAppIdentifier:(id)arg1 ;
-(id)supportedAppIdentifiers;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(id)appIdentifierForIdentifier:(id)arg1 ;
-(NSArray *)supportedIdentifiers;
-(void)selectedAppDidChange;
-(id)appSection;
-(id)selectedHandlerBundleIdentifier;
@end

