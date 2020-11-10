//
//  NDCoordinators.h
//  NDCoordinators
//
//  Created by Nguyen Duc Hiep on 1/20/20.
//  Copyright © 2020 Nguyen Duc Hiep. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for NDCoordinators.
FOUNDATION_EXPORT double NDCoordinatorsVersionNumber;

//! Project version string for NDCoordinators.
FOUNDATION_EXPORT const unsigned char NDCoordinatorsVersionString[];

#if !defined(__has_include)
#error \
    "NDCoordinators.h won't import anything if your compiler doesn't support \
          __has_include. Please import the headers individually."
#else

#if __has_include(<NDCoordinators/Abstracts.h>)
#import <NDCoordinators/Abstracts.h>
#endif

#if __has_include(<NDCoordinators/Coordinators.h>)
#import <NDCoordinators/Coordinators.h>
#endif

#endif
