/*
 * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 *  @file
 *  @brief Defines common types for the rmwu layer of the rcluc library
 */

#ifndef RCLUC__RMWU_TYPES_H_
#define RCLUC__RMWU_TYPES_H_

/* Forward declare these so they can be instantiated in the rcluc implementation without exact details exposed from the
 * rmwu implementation.
 */
typedef struct {}rmwu_node_t;
typedef struct {}rmwu_subscription_t;
typedef struct {}rmwu_publisher_t;

#endif /* ifndef RCLUC__RMWU_TYPES_H_ */
