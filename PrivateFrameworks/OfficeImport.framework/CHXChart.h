/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChart : NSObject
+(id)readFromXmlDocument:(xmlDoc*)arg1 chartStyleId:(int)arg2 state:(id)arg3 ;
+(void)readDefaultTextPropertiesFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(void)readChartFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(id)readFromXmlDocument:(xmlDoc*)arg1 state:(id)arg2 ;
+(int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode*)arg1 ;
@end

