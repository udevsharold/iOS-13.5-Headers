/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:44 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, WFColor, NSDictionary;

@interface WFTodoistProject : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	BOOL _collapsed;
	long long _projectId;
	NSString* _name;
	WFColor* _color;

}

@property (nonatomic,readonly) long long projectId;                              //@synthesize projectId=_projectId - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFColor * color;                                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) BOOL collapsed;                                   //@synthesize collapsed=_collapsed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)colorJSONTransformer;
+(id)collapsedJSONTransformer;
-(NSString *)name;
-(WFColor *)color;
-(BOOL)collapsed;
-(long long)projectId;
@end

